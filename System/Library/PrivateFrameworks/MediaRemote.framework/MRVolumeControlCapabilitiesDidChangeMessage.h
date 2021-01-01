/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:08 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaRemote/MRProtocolMessage.h>

@class NSString;

@interface MRVolumeControlCapabilitiesDidChangeMessage : MRProtocolMessage

@property (nonatomic,readonly) unsigned capabilities; 
@property (nonatomic,readonly) NSString * endpointUID; 
@property (nonatomic,readonly) NSString * outputDeviceUID; 
-(unsigned long long)type;
-(unsigned)capabilities;
-(NSString *)outputDeviceUID;
-(NSString *)endpointUID;
-(id)initWithCapabilities:(unsigned)arg1 endpointUID:(id)arg2 outputDeviceUID:(id)arg3 ;
@end

