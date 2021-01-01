/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:56 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAssetTrack.h>

@class AVMovieTrackInternal;

@interface AVMovieTrack : AVAssetTrack {

	AVMovieTrackInternal* _movieTrackInternal;

}

@property (nonatomic,readonly) SCD_Struct_AV7 mediaPresentationTimeRange; 
@property (nonatomic,readonly) SCD_Struct_AV7 mediaDecodeTimeRange; 
@property (nonatomic,readonly) long long alternateGroupID; 
+(BOOL)expectsPropertyRevisedNotifications;
-(id)description;
-(SCD_Struct_AV7)mediaPresentationTimeRange;
-(SCD_Struct_AV7)mediaDecodeTimeRange;
-(long long)alternateGroupID;
-(id)mediaDataStorage;
@end

