/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:41 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKit/UISearchSuggestion.h>

@class NSString, UIImage, IKAppKeyboardHint;

@interface _TVSearchSuggestionItem : NSObject <UISearchSuggestion> {

	IKAppKeyboardHint* _hint;

}

@property (nonatomic,readonly) IKAppKeyboardHint * hint;                     //@synthesize hint=_hint - In the implementation block
@property (nonatomic,readonly) NSString * localizedSuggestion; 
@property (nonatomic,readonly) NSString * localizedDescription; 
@property (nonatomic,readonly) UIImage * iconImage; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIImage *)iconImage;
-(IKAppKeyboardHint *)hint;
-(NSString *)localizedSuggestion;
-(id)initWithHint:(id)arg1 ;
@end

