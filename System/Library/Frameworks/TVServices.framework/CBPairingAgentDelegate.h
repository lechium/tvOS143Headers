/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:43 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CBPairingAgentDelegate <NSObject>
@optional
-(void)pairingAgent:(id)arg1 peerDidRequestPairing:(id)arg2 type:(long long)arg3 passkey:(id)arg4;
-(void)pairingAgent:(id)arg1 peerDidCompletePairing:(id)arg2;
-(void)pairingAgent:(id)arg1 peerDidFailToCompletePairing:(id)arg2 error:(id)arg3;
-(void)pairingAgent:(id)arg1 peerDidUnpair:(id)arg2;

@end

