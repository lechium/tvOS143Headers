/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:13 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMethodSignature, NSDictionary;

@interface _NADelegateMethodMetadata : NSObject {

	NSMethodSignature* _methodSignature;
	/*^block*/id _customHandler;
	NSDictionary* _customLogSettingsByArgumentIndex;

}

@property (nonatomic,retain) NSMethodSignature * methodSignature;                        //@synthesize methodSignature=_methodSignature - In the implementation block
@property (nonatomic,copy) id customHandler;                                             //@synthesize customHandler=_customHandler - In the implementation block
@property (nonatomic,copy) NSDictionary * customLogSettingsByArgumentIndex;              //@synthesize customLogSettingsByArgumentIndex=_customLogSettingsByArgumentIndex - In the implementation block
-(NSMethodSignature *)methodSignature;
-(void)setMethodSignature:(NSMethodSignature *)arg1 ;
-(id)customHandler;
-(void)setCustomHandler:(id)arg1 ;
-(NSDictionary *)customLogSettingsByArgumentIndex;
-(void)setCustomLogSettingsByArgumentIndex:(NSDictionary *)arg1 ;
@end

