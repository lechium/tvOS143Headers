/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:05 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaServices/MSVLyricsTextElement.h>

@class MSVLyricsLine;

@interface MSVLyricsWord : MSVLyricsTextElement {

	MSVLyricsLine* _parentLine;
	MSVLyricsWord* _nextWord;

}

@property (nonatomic,retain) MSVLyricsLine * parentLine;              //@synthesize parentLine=_parentLine - In the implementation block
@property (nonatomic,retain) MSVLyricsWord * nextWord;                //@synthesize nextWord=_nextWord - In the implementation block
-(id)init;
-(void)setParentLine:(MSVLyricsLine *)arg1 ;
-(MSVLyricsLine *)parentLine;
-(MSVLyricsWord *)nextWord;
-(void)setNextWord:(MSVLyricsWord *)arg1 ;
@end

