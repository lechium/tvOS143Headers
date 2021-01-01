/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:25 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIFoundation/NSTextAttachment.h>

@class NSDictionary;

@interface _UITextPlaceholderAttachment : NSTextAttachment {

	NSDictionary* _typingAttributesBeforeInsertion;
	NSRange _attachmentRange;

}

@property (assign,nonatomic) NSRange attachmentRange;                                   //@synthesize attachmentRange=_attachmentRange - In the implementation block
@property (nonatomic,copy) NSDictionary * typingAttributesBeforeInsertion;              //@synthesize typingAttributesBeforeInsertion=_typingAttributesBeforeInsertion - In the implementation block
-(id)imageForBounds:(CGRect)arg1 textContainer:(id)arg2 characterIndex:(unsigned long long)arg3 ;
-(void)setAttachmentRange:(NSRange)arg1 ;
-(NSRange)attachmentRange;
-(NSDictionary *)typingAttributesBeforeInsertion;
-(void)setTypingAttributesBeforeInsertion:(NSDictionary *)arg1 ;
@end

