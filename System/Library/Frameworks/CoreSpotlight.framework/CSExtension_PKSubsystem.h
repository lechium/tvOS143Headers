/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:15 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PKModularService.h>

@class NSString;

@interface CSExtension_PKSubsystem : NSObject <PKModularService>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)initForPlugInKit;
-(void)beginUsing:(id)arg1 withBundle:(id)arg2 ;
-(void)endUsing:(id)arg1 ;
-(id)principleClassFromDictionary:(id)arg1 ;
@end
