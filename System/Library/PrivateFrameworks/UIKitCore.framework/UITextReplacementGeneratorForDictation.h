/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:23 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITextReplacementGenerator.h>

@class NSTextAlternatives;

@interface UITextReplacementGeneratorForDictation : UITextReplacementGenerator {

	NSTextAlternatives* _alternatives;

}

@property (nonatomic,readonly) NSTextAlternatives * alternatives;              //@synthesize alternatives=_alternatives - In the implementation block
-(NSTextAlternatives *)alternatives;
-(id)replacements;
-(id)initWithAlternatives:(id)arg1 stringToReplace:(id)arg2 replacementRange:(id)arg3 ;
@end
