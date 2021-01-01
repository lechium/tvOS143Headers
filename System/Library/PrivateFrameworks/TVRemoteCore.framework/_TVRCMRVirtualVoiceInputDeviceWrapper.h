/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:59 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSDictionary;

@interface _TVRCMRVirtualVoiceInputDeviceWrapper : NSObject {

	void* _deviceDescriptor;

}

@property (nonatomic,copy) NSArray * supportedFormats; 
@property (nonatomic,copy) NSDictionary * defaultAudioFormat; 
-(id)init;
-(void)dealloc;
-(NSArray *)supportedFormats;
-(void*)deviceDescriptor;
-(void)setSupportedFormats:(NSArray *)arg1 ;
-(NSDictionary *)defaultAudioFormat;
-(void)setDefaultAudioFormat:(NSDictionary *)arg1 ;
@end
