bool isIPv4Address(std::string inputString) {
  // isIPv4address : IPv4-Adress -> Bool.
  // Check a valid IPv4 address.
  const std::string byte_pattern ("(25[0-5]|2[0-4][0-9]|1[0-9][0-9]|[1-9]?[0-9])");
  const std::regex ipv4_pattern ("(" + byte_pattern + "\\.){3}"
                                 + byte_pattern);
  return std::regex_match(inputString, ipv4_pattern);
}
