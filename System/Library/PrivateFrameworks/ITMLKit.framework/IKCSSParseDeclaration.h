/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:54 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ITMLKit/ITMLKit-Structs.h>
#import <ITMLKit/IKCSSParseObject.h>

@class NSString;

@interface IKCSSParseDeclaration : IKCSSParseObject {

	BOOL _important;
	NSString* _name;
	NSRange _nameRange;
	NSRange _valueRange;

}

@property (assign,nonatomic) NSRange nameRange;               //@synthesize nameRange=_nameRange - In the implementation block
@property (assign,nonatomic) NSRange valueRange;              //@synthesize valueRange=_valueRange - In the implementation block
@property (nonatomic,retain) NSString * name;                 //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL important;                  //@synthesize important=_important - In the implementation block
-(NSString *)name;
-(id)description;
-(id)init;
-(void)setName:(NSString *)arg1 ;
-(BOOL)important;
-(void)setImportant:(BOOL)arg1 ;
-(NSRange)valueRange;
-(NSRange)nameRange;
-(void)setNameRange:(NSRange)arg1 ;
-(void)setValueRange:(NSRange)arg1 ;
@end

