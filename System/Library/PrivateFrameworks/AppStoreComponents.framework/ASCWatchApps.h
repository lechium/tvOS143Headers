/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:12 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class ASCAppOfferStateCenter;

@interface ASCWatchApps : NSObject {

	ASCAppOfferStateCenter* _appOfferStateCenter;

}

@property (nonatomic,readonly) ASCAppOfferStateCenter * appOfferStateCenter;              //@synthesize appOfferStateCenter=_appOfferStateCenter - In the implementation block
+(id)sharedWatchApps;
-(id)initWithAppOfferStateCenter:(id)arg1 ;
-(ASCAppOfferStateCenter *)appOfferStateCenter;
-(id)reinstallAppWithID:(id)arg1 ;
-(id)reinstallSystemAppWithBundleID:(id)arg1 ;
@end
