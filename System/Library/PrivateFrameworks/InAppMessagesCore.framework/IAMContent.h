/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:07 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/InAppMessagesCore.framework/InAppMessagesCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <InAppMessagesCore/InAppMessagesCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, NSDictionary;

@interface IAMContent : NSObject <NSCopying> {

	NSString* _title;
	NSString* _subtitle;
	NSString* _body;
	NSArray* _images;
	NSArray* _actions;
	NSDictionary* _contentParameters;
	NSString* _identifier;

}

@property (nonatomic,copy,readonly) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                      //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * body;                          //@synthesize body=_body - In the implementation block
@property (nonatomic,copy,readonly) NSArray * images;                         //@synthesize images=_images - In the implementation block
@property (nonatomic,copy,readonly) NSArray * actions;                        //@synthesize actions=_actions - In the implementation block
@property (nonatomic,readonly) NSDictionary * contentParameters;              //@synthesize contentParameters=_contentParameters - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(NSString *)title;
-(NSArray *)actions;
-(NSString *)subtitle;
-(NSString *)body;
-(NSArray *)images;
-(NSDictionary *)contentParameters;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 body:(id)arg3 images:(id)arg4 actions:(id)arg5 contentParameters:(id)arg6 identifier:(id)arg7 ;
-(id)initWithICMessageContent:(id)arg1 ;
@end

