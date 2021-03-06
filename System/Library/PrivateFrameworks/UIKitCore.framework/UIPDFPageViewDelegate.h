/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:34 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol UIPDFPageViewDelegate
@optional
-(void)resetZoom:(id)arg1;
-(void)zoom:(id)arg1 to:(CGRect)arg2 atPoint:(CGPoint)arg3 kind:(int)arg4;
-(void)doubleTapIn:(id)arg1 atPoint:(CGPoint)arg2;
-(BOOL)shouldRecognizeTapIn:(id)arg1 atPoint:(CGPoint)arg2;
-(void)didTap:(id)arg1 atPoint:(CGPoint)arg2;
-(BOOL)selectionWillTrack:(id)arg1;
-(void)selectionDidEndTracking:(id)arg1;
-(id)menuItems:(id)arg1 forPage:(id)arg2;
-(Class)classForAnnotationType:(const char*)arg1;
-(void)pageWasRendered:(id)arg1;

@end

