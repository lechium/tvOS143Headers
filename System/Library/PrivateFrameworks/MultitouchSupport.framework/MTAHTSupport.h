/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:08 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MultitouchSupport.framework/MultitouchSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSBundle;

@interface MTAHTSupport : NSObject {

	NSBundle* _bundle;
	Class _AHTDevice;

}

@property (retain) NSBundle * bundle;                      //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,retain) Class AHTDevice;              //@synthesize AHTDevice=_AHTDevice - In the implementation block
+(id)sharedInstance;
+(id)allDevices;
-(id)init;
-(NSBundle *)bundle;
-(void)setBundle:(NSBundle *)arg1 ;
-(Class)AHTDevice;
-(void)setAHTDevice:(Class)arg1 ;
@end

