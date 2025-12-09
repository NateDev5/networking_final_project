let nixpkgs = import <nixpkgs> { };
in with nixpkgs;
nixpkgs.multiStdenv.mkDerivation {
  name = "final-network-project-env";
  buildInputs = [ glibc libgcc nasm gnumake tinyxxd gdb python3 python312Packages.pwntools ];
}
