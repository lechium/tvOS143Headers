/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:29 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSUndoManager.h>

@class WKContentView;

@interface WKQuirkyNSUndoManager : NSUndoManager {

	WKContentView* _contentView;

}

@property (__weak,readonly) WKContentView * contentView;              //@synthesize contentView=_contentView - In the implementation block
-(BOOL)canRedo;
-(BOOL)canUndo;
-(void)undo;
-(void)redo;
-(WKContentView *)contentView;
-(id)initWithContentView:(id)arg1 ;
@end

