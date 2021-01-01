/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:47 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, NSString, NSCountedSet;

@interface PXAttributedStringHTMLParser : NSObject {

	unsigned __currentTraits;
	NSDictionary* _emphasizedAttributes;
	NSDictionary* _italicizedAttributes;
	/*^block*/id _parsedAttributedStringBlock;
	/*^block*/id _parsedErrorBlock;
	NSString* __htmlString;
	NSDictionary* __defaultAttributes;
	NSCountedSet* __currentMarkupElements;
	NSDictionary* __currentAttributes;

}

@property (nonatomic,copy,readonly) NSString * _htmlString;                                              //@synthesize _htmlString=__htmlString - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * _defaultAttributes;                                   //@synthesize _defaultAttributes=__defaultAttributes - In the implementation block
@property (nonatomic,readonly) NSCountedSet * _currentMarkupElements;                                    //@synthesize _currentMarkupElements=__currentMarkupElements - In the implementation block
@property (assign,setter=_setCurrentTraits:,nonatomic) unsigned _currentTraits;                          //@synthesize _currentTraits=__currentTraits - In the implementation block
@property (setter=_setCurrentAttributes:,nonatomic,copy) NSDictionary * _currentAttributes;              //@synthesize _currentAttributes=__currentAttributes - In the implementation block
@property (nonatomic,copy) NSDictionary * emphasizedAttributes;                                          //@synthesize emphasizedAttributes=_emphasizedAttributes - In the implementation block
@property (nonatomic,copy) NSDictionary * italicizedAttributes;                                          //@synthesize italicizedAttributes=_italicizedAttributes - In the implementation block
@property (nonatomic,copy) id parsedAttributedStringBlock;                                               //@synthesize parsedAttributedStringBlock=_parsedAttributedStringBlock - In the implementation block
@property (nonatomic,copy) id parsedErrorBlock;                                                          //@synthesize parsedErrorBlock=_parsedErrorBlock - In the implementation block
+(id)stringByConvertingToHTML:(id)arg1 ;
-(id)init;
-(void)parse;
-(NSString *)_htmlString;
-(NSDictionary *)_defaultAttributes;
-(NSDictionary *)emphasizedAttributes;
-(void)setEmphasizedAttributes:(NSDictionary *)arg1 ;
-(id)initWithHTMLString:(id)arg1 defaultAttributes:(id)arg2 ;
-(void)_updateCurrentTraits;
-(void)_setCurrentTraits:(unsigned)arg1 ;
-(NSDictionary *)italicizedAttributes;
-(void)setItalicizedAttributes:(NSDictionary *)arg1 ;
-(id)parsedAttributedStringBlock;
-(void)setParsedAttributedStringBlock:(id)arg1 ;
-(id)parsedErrorBlock;
-(void)setParsedErrorBlock:(id)arg1 ;
-(NSCountedSet *)_currentMarkupElements;
-(unsigned)_currentTraits;
-(NSDictionary *)_currentAttributes;
-(void)_setCurrentAttributes:(id)arg1 ;
@end

