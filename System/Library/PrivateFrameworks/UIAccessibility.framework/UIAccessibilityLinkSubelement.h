/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:08 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIAccessibility/UIAccessibility-Structs.h>
#import <UIKitCore/UIAccessibilityElement.h>

@class NSURL;

@interface UIAccessibilityLinkSubelement : UIAccessibilityElement {

	NSURL* _url;
	NSRange _range;

}

@property (assign,nonatomic) NSRange range;              //@synthesize range=_range - In the implementation block
@property (nonatomic,retain) NSURL * url;                //@synthesize url=_url - In the implementation block
-(void)setUrl:(NSURL *)arg1 ;
-(NSURL *)url;
-(NSRange)range;
-(void)setRange:(NSRange)arg1 ;
-(unsigned long long)accessibilityTraits;
-(CGRect)accessibilityFrame;
-(unsigned long long)_accessibilityAutomationType;
-(id)textRangeForTextView:(id)arg1 ;
@end

