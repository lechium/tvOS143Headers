/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:47 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreRC/CoreRC-Structs.h>
#import <CoreRC/CECInterface.h>

@class NSMutableDictionary;

@interface CECFakeInterface : CECInterface {

	NSMutableDictionary* _properties;

}
+(id)defaultTVProperties;
+(id)defaultPlaybackDeviceProperties;
-(void)dealloc;
-(id)properties;
-(id)initWithInterfaceListener:(id)arg1 properties:(id)arg2 ;
-(BOOL)errorIsNack:(id)arg1 ;
-(BOOL)sendFrame:(CECFrame)arg1 withRetryCount:(unsigned char)arg2 error:(id*)arg3 ;
-(BOOL)pingTo:(unsigned char)arg1 acknowledged:(BOOL*)arg2 error:(id*)arg3 ;
-(void)fakePropertiesChanged:(id)arg1 ;
-(void)fakeTerminated;
-(void)fakeHotPlugDetect:(BOOL)arg1 ;
@end

