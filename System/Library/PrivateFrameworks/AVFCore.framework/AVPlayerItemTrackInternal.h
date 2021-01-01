/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:54 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVFCore/AVFCore-Structs.h>
@class AVWeakReference, AVAsset, NSString, NSDictionary;

@interface AVPlayerItemTrackInternal : NSObject {

	AVWeakReference* weakReferenceToPlayerItem;
	OpaqueFigPlaybackItemRef figPlaybackItem;
	BOOL figPlaybackItemIsReadyForInspection;
	AVAsset* asset;
	int trackID;
	NSString* videoFieldMode;
	NSDictionary* loudnessInfo;
	NSDictionary* videoEnhancementFilterOptions;
	BOOL enabled;
	BOOL enabledWasSet;
	BOOL disableColorMatching;
	BOOL disableColorMatchingWasSet;
	long long activeHapticChannelIndex;
	BOOL activeHapticChannelIndexWasSet;
	float hapticVolume;
	BOOL hapticVolumeWasSet;

}
@end

