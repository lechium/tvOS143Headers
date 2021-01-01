/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:34 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class WAKWindow;

@interface UIWebTiledView : UIView {

	WAKWindow* _wakWindow;
	int _inGestureType;
	int _tilingArea;
	BOOL _didFirstTileLayout;
	BOOL _layoutTilesInMainThread;
	BOOL _tilingModeIsLocked;
	BOOL _allowsPaintingAndScriptsWhilePanning;
	BOOL _editingTilingModeEnabled;

}
-(void)dealloc;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(CGSize)tileSize;
-(void)setTileSize:(CGSize)arg1 ;
-(void)setNeedsDisplay;
-(void)setNeedsLayout;
-(CGRect)visibleRect;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutTilesNow;
-(void)layoutTilesNowForRect:(CGRect)arg1 ;
-(BOOL)tilesOpaque;
-(void)setTilesOpaque:(BOOL)arg1 ;
-(void)removeAllNonVisibleTiles;
-(void)removeAllTiles;
-(void)removeForegroundTiles;
-(void)setKeepsZoomedOutTiles:(BOOL)arg1 ;
-(BOOL)keepsZoomedOutTiles;
-(void)dumpTiles;
-(void)_screenChanged:(id)arg1 ;
-(void)layoutSubviews;
-(void)_didScroll;
-(void)willMoveToWindow:(id)arg1 ;
-(void)_updateForScreen:(id)arg1 ;
-(void)setInGesture:(int)arg1 ;
-(void)setEditingTilingModeEnabled:(BOOL)arg1 ;
-(void)setTilingEnabled:(BOOL)arg1 ;
-(BOOL)isTilingEnabled;
-(void)setAllowsPaintingAndScriptsWhilePanning:(BOOL)arg1 ;
-(void)setTilingArea:(int)arg1 ;
-(int)tilingArea;
-(void)updateTilingMode;
-(void)setWAKWindow:(id)arg1 ;
-(void)layoutTilesNowOnWebThread;
-(void)drawImageIntoTiles:(CGImageRef)arg1 ;
-(void)lockTilingMode;
-(void)unlockTilingMode;
-(BOOL)allowsPaintingAndScriptsWhilePanning;
-(void)setDrawsGrid:(BOOL)arg1 ;
-(BOOL)drawsGrid;
-(void)setMaxTileCount:(unsigned)arg1 ;
-(unsigned)maxTileCount;
-(unsigned)adjustedMaxTileCount;
-(void)setLogsTilingChanges:(BOOL)arg1 ;
-(BOOL)logsTilingChanges;
-(void)setTileDrawingEnabled:(BOOL)arg1 ;
-(BOOL)editingTilingModeEnabled;
-(BOOL)tileDrawingEnabled;
-(BOOL)layoutTilesInMainThread;
-(void)setLayoutTilesInMainThread:(BOOL)arg1 ;
-(id)wakWindow;
@end
