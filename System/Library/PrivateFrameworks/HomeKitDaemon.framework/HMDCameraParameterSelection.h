/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:37 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMDCameraStreamSessionID, HMDCameraVideoParameterSelection, HMDCameraAudioParameterSelection, NSString;

@interface HMDCameraParameterSelection : HMFObject <HMFLogging> {

	HMDCameraStreamSessionID* _sessionID;
	HMDCameraVideoParameterSelection* _videoParameterSelection;
	HMDCameraAudioParameterSelection* _audioParameterSelection;

}

@property (nonatomic,readonly) HMDCameraStreamSessionID * sessionID;                                  //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,retain) HMDCameraVideoParameterSelection * videoParameterSelection;              //@synthesize videoParameterSelection=_videoParameterSelection - In the implementation block
@property (nonatomic,retain) HMDCameraAudioParameterSelection * audioParameterSelection;              //@synthesize audioParameterSelection=_audioParameterSelection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(HMDCameraStreamSessionID *)sessionID;
-(id)logIdentifier;
-(id)initWithSessionID:(id)arg1 ;
-(BOOL)findBestMatchWithProtocolParameters:(id)arg1 streamingCapabilities:(id)arg2 videoTierParameters:(id)arg3 ;
-(void)setSelectedEndPointSetupParameters:(id)arg1 videoNetworkConfig:(id)arg2 audioNetworkConfig:(id)arg3 ;
-(void)setSelectedConfigParameters:(id)arg1 ;
-(void)setReselectedConfigParameters:(id)arg1 videoTier:(id)arg2 ;
-(void)setVideoParameterSelection:(HMDCameraVideoParameterSelection *)arg1 ;
-(void)setAudioParameterSelection:(HMDCameraAudioParameterSelection *)arg1 ;
-(HMDCameraVideoParameterSelection *)videoParameterSelection;
-(HMDCameraAudioParameterSelection *)audioParameterSelection;
@end

