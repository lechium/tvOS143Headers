/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:50 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol MPEffectSupport;
@class MCText, MPTextInternal, NSObject;

@interface MPText : NSObject <NSCopying> {

	MCText* _text;
	MPTextInternal* _internal;
	NSObject*<MPEffectSupport> _parent;

}
+(id)textWithAttributedString:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)setAttributedString:(id)arg1 ;
-(id)initWithAttributedString:(id)arg1 ;
-(long long)index;
-(void)dump;
-(id)text;
-(void)setText:(id)arg1 ;
-(id)action;
-(id)defaultString;
-(double)maxFontSize;
-(void)setParent:(id)arg1 ;
-(id)attributedString;
-(BOOL)isOriginal;
-(id)plainString;
-(double)displayTime;
-(id)fullDebugLog;
-(id)parentEffect;
-(void)copyStruct:(id)arg1 ;
-(id)nearestPlug;
-(void)checkForMaxFontSize;
-(void)checkForPlacesLabel;
-(id)subtitleSlide;
-(double)displayStartTime;
-(double)displayDuration;
-(double)textAreaAspectRatio;
-(void)setPlainString:(id)arg1 ;
@end

