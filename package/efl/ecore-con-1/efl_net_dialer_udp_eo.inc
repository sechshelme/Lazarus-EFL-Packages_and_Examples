{$IFDEF read_interface}


type
  PEfl_Net_Dialer_Udp = ^TEfl_Net_Dialer_Udp;
  TEfl_Net_Dialer_Udp = TEo;

{$ifdef EFL_BETA_API_SUPPORT}
function EFL_NET_DIALER_UDP_CLASS: PEfl_Class;

function efl_net_dialer_udp_class_get: PEfl_Class; cdecl; external libecore_con;
{$endif}

// === Konventiert am: 9-6-25 19:15:35 ===


{$ENDIF read_interface}


{$IFDEF read_implementation}


{$ifdef EFL_BETA_API_SUPPORT}
function EFL_NET_DIALER_UDP_CLASS: PEfl_Class;
begin
  EFL_NET_DIALER_UDP_CLASS := efl_net_dialer_udp_class_get;
end;
{$endif}


{$ENDIF read_implementation}
