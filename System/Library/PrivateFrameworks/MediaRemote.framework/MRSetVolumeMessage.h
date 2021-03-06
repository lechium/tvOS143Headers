/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:07 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaRemote/MRProtocolMessage.h>

@class NSString;

@interface MRSetVolumeMessage : MRProtocolMessage

@property (nonatomic,readonly) NSString * outputDeviceUID; 
@property (nonatomic,readonly) float volume; 
-(unsigned long long)type;
-(float)volume;
-(id)initWithVolume:(float)arg1 ;
-(NSString *)outputDeviceUID;
-(id)initWithVolume:(float)arg1 outputDeviceUID:(id)arg2 ;
@end

