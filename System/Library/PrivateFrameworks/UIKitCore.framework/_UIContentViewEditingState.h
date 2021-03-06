/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:13 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _UIContentViewEditingState : NSObject <NSCopying> {

	NSString* _text;
	NSString* _proposedReplacementText;
	NSRange _proposedReplacementRange;

}

@property (nonatomic,readonly) NSString * text;                                 //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) NSString * proposedReplacementText;              //@synthesize proposedReplacementText=_proposedReplacementText - In the implementation block
@property (nonatomic,readonly) NSRange proposedReplacementRange;                //@synthesize proposedReplacementRange=_proposedReplacementRange - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)text;
-(id)initWithText:(id)arg1 ;
-(id)initWithText:(id)arg1 proposedReplacementText:(id)arg2 proposedReplacementRange:(NSRange)arg3 ;
-(NSString *)proposedReplacementText;
-(NSRange)proposedReplacementRange;
@end

