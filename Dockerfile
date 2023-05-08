FROM alpine:3.14
RUN apk add --no-cache git curl build-base gcc alpine-sdk eudev-dev libusb-dev libusb linux-headers

ENV RUSTUP_HOME=/rust
ENV CARGO_HOME=/cargo 
ENV PATH=/cargo/bin:/rust/bin:$PATH

RUN curl https://sh.rustup.rs -sSf | sh -s -- -y --default-toolchain nightly --no-modify-path && rustup default nightly

RUN rustup target add thumbv7em-none-eabihf
RUN rustup component add llvm-tools-preview 
RUN cargo install cargo-binutils cargo-embed cargo-flash cargo-expand

ENTRYPOINT ["rustup"]
