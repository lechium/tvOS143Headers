/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:53 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface PSISynonymRecord : NSObject {

	short _category;
	NSString* _synonym;
	NSString* _identifier;

}

@property (nonatomic,copy) NSString * synonym;                 //@synthesize synonym=_synonym - In the implementation block
@property (assign,nonatomic) short category;                   //@synthesize category=_category - In the implementation block
@property (nonatomic,copy) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(short)category;
-(void)setCategory:(short)arg1 ;
-(NSString *)synonym;
-(void)setSynonym:(NSString *)arg1 ;
-(id)initWithSynonym:(id)arg1 category:(short)arg2 identifier:(id)arg3 ;
@end
