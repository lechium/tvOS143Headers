/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:17 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/FMDAudioAccessory.h>
#import <libobjc.A.dylib/FMDAccessory.h>

@class NSString, NSURL, FMDAudioAccessoryInfo, FMDAccessoryIdentifier;

@interface FMDGenericAudioAccessory : NSObject <NSSecureCoding, FMDAudioAccessory, FMDAccessory> {

	FMDAccessoryIdentifier* _accessoryIdentifier;
	NSString* _audioRoutingIdentifier;
	NSURL* _audioURL;
	FMDAudioAccessoryInfo* _audioAccessoryInfo;

}

@property (nonatomic,retain) FMDAccessoryIdentifier * accessoryIdentifier;              //@synthesize accessoryIdentifier=_accessoryIdentifier - In the implementation block
@property (nonatomic,retain) NSString * audioRoutingIdentifier;                         //@synthesize audioRoutingIdentifier=_audioRoutingIdentifier - In the implementation block
@property (nonatomic,retain) NSURL * audioURL;                                          //@synthesize audioURL=_audioURL - In the implementation block
@property (nonatomic,retain) FMDAudioAccessoryInfo * audioAccessoryInfo;                //@synthesize audioAccessoryInfo=_audioAccessoryInfo - In the implementation block
@property (nonatomic,readonly) unsigned long long audioSafetyStatus; 
@property (nonatomic,readonly) BOOL playingSound; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)copyAccessory:(id)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(FMDAccessoryIdentifier *)accessoryIdentifier;
-(void)setAccessoryIdentifier:(FMDAccessoryIdentifier *)arg1 ;
-(NSURL *)audioURL;
-(BOOL)updateAudioAsset:(id)arg1 ;
-(BOOL)updatePlaybackChannels:(id)arg1 ;
-(unsigned long long)audioSafetyStatus;
-(NSString *)audioRoutingIdentifier;
-(FMDAudioAccessoryInfo *)audioAccessoryInfo;
-(BOOL)playingSound;
-(void)setAudioRoutingIdentifier:(NSString *)arg1 ;
-(void)setAudioURL:(NSURL *)arg1 ;
-(void)setAudioAccessoryInfo:(FMDAudioAccessoryInfo *)arg1 ;
@end

