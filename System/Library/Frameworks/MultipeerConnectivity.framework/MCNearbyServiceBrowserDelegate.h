/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:38 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MCNearbyServiceBrowserDelegate <NSObject>
@optional
-(void)browser:(id)arg1 didNotStartBrowsingForPeers:(id)arg2;

@required
-(void)browser:(id)arg1 foundPeer:(id)arg2 withDiscoveryInfo:(id)arg3;
-(void)browser:(id)arg1 lostPeer:(id)arg2;

@end
