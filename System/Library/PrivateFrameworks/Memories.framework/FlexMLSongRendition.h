/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:47 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Memories/Memories-Structs.h>
#import <Memories/FMSongRendition.h>

@class FlexMLSummary;

@interface FlexMLSongRendition : FMSongRendition {

	FlexMLSummary* _summary;

}

@property (nonatomic,retain) FlexMLSummary * summary;              //@synthesize summary=_summary - In the implementation block
-(FlexMLSummary *)summary;
-(void)setSummary:(FlexMLSummary *)arg1 ;
-(id)_buildOutroFadeoutMixParams;
-(id)initWithSong:(id)arg1 options:(id)arg2 andSummary:(id)arg3 forDuration:(SCD_Struct_TV3)arg4 ;
-(void)_calculateDuration:(SCD_Struct_TV3)arg1 ;
-(void)_buildTracks;
@end

