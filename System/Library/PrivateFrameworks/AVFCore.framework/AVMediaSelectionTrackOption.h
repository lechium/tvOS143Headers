/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:57 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVMediaSelectionOption.h>

@class AVAssetTrack, NSDictionary, AVWeakReference;

@interface AVMediaSelectionTrackOption : AVMediaSelectionOption {

	id _groupID;
	AVAssetTrack* _track;
	NSDictionary* _dictionary;
	AVWeakReference* _weakReferenceToGroup;
	BOOL _displaysNonForcedSubtitles;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)dealloc;
-(id)dictionary;
-(id)locale;
-(id)group;
-(id)_groupID;
-(int)trackID;
-(id)track;
-(id)mediaType;
-(id)commonMetadata;
-(BOOL)isPlayable;
-(id)metadataForFormat:(id)arg1 ;
-(id)_track;
-(id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)arg1 ;
-(id)mediaSubTypes;
-(id)availableMetadataFormats;
-(BOOL)displaysNonForcedSubtitles;
-(id)initWithAsset:(id)arg1 group:(id)arg2 dictionary:(id)arg3 ;
@end

