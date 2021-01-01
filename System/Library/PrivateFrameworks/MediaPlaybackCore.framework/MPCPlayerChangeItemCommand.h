/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:22 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MPCPlayerChangeItemCommand <MPCPlayerCommand>
@required
-(id)nextItem;
-(id)previousItem;
-(id)previousItemDeferringToPlaybackQueuePosition;
-(id)previousSection;
-(id)previousChapter;
-(id)nextSection;
-(id)nextChapter;
-(id)changeToSection:(id)arg1;
-(id)changeToItem:(id)arg1;

@end

