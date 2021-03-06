/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:15 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AMSBagProtocol;
@class NSString, NSNumber;

@interface ASDMediaClipTaskURLBuilder : NSObject {

	NSString* _bundleID;
	id<AMSBagProtocol> _bag;
	NSNumber* _externalVersionID;

}

@property (nonatomic,retain) NSNumber * externalVersionID;              //@synthesize externalVersionID=_externalVersionID - In the implementation block
-(id)build;
-(id)_devicePlatform;
-(id)_hostPromise;
-(id)_pathPromise;
-(id)_queryPromise;
-(id)initWithBundleID:(id)arg1 bag:(id)arg2 ;
-(NSNumber *)externalVersionID;
-(void)setExternalVersionID:(NSNumber *)arg1 ;
@end

