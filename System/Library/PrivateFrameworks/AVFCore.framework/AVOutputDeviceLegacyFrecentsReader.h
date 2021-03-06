/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:56 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVOutputDeviceFrecentsReading.h>

@class NSArray, NSString;

@interface AVOutputDeviceLegacyFrecentsReader : NSObject <AVOutputDeviceFrecentsReading>

@property (nonatomic,readonly) NSArray * deviceIDs; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultFrecentsReader;
-(NSArray *)deviceIDs;
-(id)frecencyInfoForDeviceWithID:(id)arg1 ;
@end

