/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:23 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebCore/WebCore-Structs.h>
#import <WebCore/WAKView.h>

@class WAKView;

@interface WAKClipView : WAKView {

	BOOL _copiesOnScroll;
	WAKView* _documentView;

}

@property (nonatomic,readonly) WAKView * documentView;              //@synthesize documentView=_documentView - In the implementation block
@property (assign,nonatomic) BOOL copiesOnScroll;                   //@synthesize copiesOnScroll=_copiesOnScroll - In the implementation block
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(WAKView *)documentView;
-(void)setCopiesOnScroll:(BOOL)arg1 ;
-(BOOL)copiesOnScroll;
-(CGRect)documentVisibleRect;
-(void)_setDocumentView:(id)arg1 ;
@end
