/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:55 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface DNDSClientDetailsProvider : NSObject {

	NSMutableDictionary* _detailsByIdentifier;

}
+(id)_defaultModuleDirectories;
-(id)init;
-(id)clientDetailsForIdentifier:(id)arg1 ;
-(void)_loadPreloadBundles;
-(id)clientDetailsForIdentifier:(id)arg1 applicationBundleURL:(id)arg2 ;
-(id)findClientDetailsForIdentifier:(id)arg1 ;
@end

