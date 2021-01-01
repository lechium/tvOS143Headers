/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:22 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlaybackCore/_MPCPlayerCommand.h>
#import <libobjc.A.dylib/MPCPlayerChangeItemCommand.h>

@class NSString;

@interface _MPCPlayerChangeItemCommand : _MPCPlayerCommand <MPCPlayerChangeItemCommand> {

	unsigned long long _changeItemSupport;

}

@property (nonatomic,readonly) unsigned long long changeItemSupport;              //@synthesize changeItemSupport=_changeItemSupport - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)nextItem;
-(id)previousItem;
-(id)initWithResponse:(id)arg1 changeItemSupport:(unsigned long long)arg2 ;
-(id)previousItemDeferringToPlaybackQueuePosition;
-(id)previousSection;
-(id)previousChapter;
-(id)nextSection;
-(id)nextChapter;
-(id)changeToSection:(id)arg1 ;
-(id)changeToItem:(id)arg1 ;
-(unsigned long long)changeItemSupport;
@end

