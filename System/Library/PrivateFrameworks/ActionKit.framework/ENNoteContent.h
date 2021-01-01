/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:06 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface ENNoteContent : NSObject {

	NSString* _emml;

}

@property (nonatomic,copy) NSString * emml;              //@synthesize emml=_emml - In the implementation block
+(id)noteContentWithString:(id)arg1 ;
+(id)noteContentWithContentArray:(id)arg1 ;
+(id)noteContentWithSanitizedHTML:(id)arg1 ;
+(id)noteContentWithENML:(id)arg1 ;
-(id)enmlWithNote:(id)arg1 ;
-(id)initWithENML:(id)arg1 ;
-(id)enml;
-(NSString *)emml;
-(void)setEmml:(NSString *)arg1 ;
@end

