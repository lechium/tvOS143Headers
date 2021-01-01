/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:59 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class TVRCKeyboardAttributes, NSString;

@interface _TVRCKeyboardState : NSObject <NSSecureCoding> {

	BOOL _isEditing;
	TVRCKeyboardAttributes* _attributes;
	NSString* _text;

}

@property (assign,nonatomic) BOOL isEditing;                                 //@synthesize isEditing=_isEditing - In the implementation block
@property (nonatomic,copy) TVRCKeyboardAttributes * attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,copy) NSString * text;                                  //@synthesize text=_text - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)keyboardStateFromDevice:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(TVRCKeyboardAttributes *)attributes;
-(void)setAttributes:(TVRCKeyboardAttributes *)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(BOOL)isEditing;
-(void)setIsEditing:(BOOL)arg1 ;
@end

