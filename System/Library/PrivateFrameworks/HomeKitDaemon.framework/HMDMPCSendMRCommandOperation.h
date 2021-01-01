/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:39 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFOperation.h>
#import <libobjc.A.dylib/HMFObject.h>

@protocol HMDMPCSendMRCommandOperationExternalObjectInterface;
@class MPCAssistantRemoteControlDestination, MPPlaybackArchive, NSDictionary, NSNumber, NSString, NSArray;

@interface HMDMPCSendMRCommandOperation : HMFOperation <HMFObject> {

	MPCAssistantRemoteControlDestination* _destination;
	MPPlaybackArchive* _playbackArchive;
	NSDictionary* _options;
	NSNumber* _mediaRemoteCommand;
	id<HMDMPCSendMRCommandOperationExternalObjectInterface> _externalObjectInterface;

}

@property (nonatomic,retain) id<HMDMPCSendMRCommandOperationExternalObjectInterface> externalObjectInterface;              //@synthesize externalObjectInterface=_externalObjectInterface - In the implementation block
@property (nonatomic,readonly) MPCAssistantRemoteControlDestination * destination;                                         //@synthesize destination=_destination - In the implementation block
@property (nonatomic,readonly) MPPlaybackArchive * playbackArchive;                                                        //@synthesize playbackArchive=_playbackArchive - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * options;                                                                //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) NSNumber * mediaRemoteCommand;                                                              //@synthesize mediaRemoteCommand=_mediaRemoteCommand - In the implementation block
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)shortDescription;
-(NSString *)description;
-(NSDictionary *)options;
-(void)main;
-(MPCAssistantRemoteControlDestination *)destination;
-(NSString *)shortDescription;
-(NSString *)privateDescription;
-(MPPlaybackArchive *)playbackArchive;
-(NSArray *)attributeDescriptions;
-(id<HMDMPCSendMRCommandOperationExternalObjectInterface>)externalObjectInterface;
-(void)setExternalObjectInterface:(id<HMDMPCSendMRCommandOperationExternalObjectInterface>)arg1 ;
-(NSNumber *)mediaRemoteCommand;
-(id)initWithCommand:(unsigned)arg1 options:(id)arg2 destination:(id)arg3 ;
-(id)initWithPlaybackArchive:(id)arg1 destination:(id)arg2 ;
@end

