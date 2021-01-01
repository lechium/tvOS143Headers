/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:00 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBSuggestionCardSection.h>
@class NSArray, NSString, _SFPBColor, _SFPBRichText, _SFPBImage, NSData;


@protocol _SFPBSuggestionCardSection <NSObject>
@property (nonatomic,copy) NSArray * punchoutOptions; 
@property (nonatomic,copy) NSString * punchoutPickerTitle; 
@property (nonatomic,copy) NSString * punchoutPickerDismissText; 
@property (assign,nonatomic) BOOL canBeHidden; 
@property (assign,nonatomic) BOOL hasTopPadding; 
@property (assign,nonatomic) BOOL hasBottomPadding; 
@property (nonatomic,copy) NSString * type; 
@property (assign,nonatomic) int separatorStyle; 
@property (nonatomic,retain) _SFPBColor * backgroundColor; 
@property (nonatomic,retain) _SFPBRichText * suggestionText; 
@property (assign,nonatomic) BOOL isContact; 
@property (nonatomic,copy) NSString * scopedSearchSectionBundleIdentifier; 
@property (assign,nonatomic) int suggestionType; 
@property (nonatomic,retain) _SFPBRichText * detailText; 
@property (nonatomic,retain) _SFPBImage * thumbnail; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setType:(id)arg1;
-(NSString *)type;
-(id)initWithDictionary:(id)arg1;
-(_SFPBImage *)thumbnail;
-(void)setThumbnail:(id)arg1;
-(_SFPBColor *)backgroundColor;
-(void)setBackgroundColor:(id)arg1;
-(id)initWithJSON:(id)arg1;
-(void)setSuggestionType:(int)arg1;
-(int)suggestionType;
-(NSArray *)punchoutOptions;
-(NSData *)jsonData;
-(_SFPBRichText *)detailText;
-(void)setDetailText:(id)arg1;
-(void)setPunchoutOptions:(id)arg1;
-(NSString *)punchoutPickerTitle;
-(void)setPunchoutPickerTitle:(id)arg1;
-(NSString *)punchoutPickerDismissText;
-(void)setPunchoutPickerDismissText:(id)arg1;
-(BOOL)canBeHidden;
-(void)setCanBeHidden:(BOOL)arg1;
-(BOOL)hasTopPadding;
-(void)setHasTopPadding:(BOOL)arg1;
-(BOOL)hasBottomPadding;
-(void)setHasBottomPadding:(BOOL)arg1;
-(int)separatorStyle;
-(void)setSeparatorStyle:(int)arg1;
-(void)addPunchoutOptions:(id)arg1;
-(void)clearPunchoutOptions;
-(unsigned long long)punchoutOptionsCount;
-(id)punchoutOptionsAtIndex:(unsigned long long)arg1;
-(void)setSuggestionText:(id)arg1;
-(void)setIsContact:(BOOL)arg1;
-(void)setScopedSearchSectionBundleIdentifier:(id)arg1;
-(_SFPBRichText *)suggestionText;
-(BOOL)isContact;
-(NSString *)scopedSearchSectionBundleIdentifier;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString, _SFPBColor, _SFPBRichText, _SFPBImage, NSData;

@interface _SFPBSuggestionCardSection : PBCodable <_SFPBSuggestionCardSection, NSSecureCoding> {

	BOOL _canBeHidden;
	BOOL _hasTopPadding;
	BOOL _hasBottomPadding;
	BOOL _isContact;
	int _separatorStyle;
	int _suggestionType;
	NSArray* _punchoutOptions;
	NSString* _punchoutPickerTitle;
	NSString* _punchoutPickerDismissText;
	NSString* _type;
	_SFPBColor* _backgroundColor;
	_SFPBRichText* _suggestionText;
	NSString* _scopedSearchSectionBundleIdentifier;
	_SFPBRichText* _detailText;
	_SFPBImage* _thumbnail;

}

@property (nonatomic,copy) NSArray * punchoutOptions;                                   //@synthesize punchoutOptions=_punchoutOptions - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerTitle;                              //@synthesize punchoutPickerTitle=_punchoutPickerTitle - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerDismissText;                        //@synthesize punchoutPickerDismissText=_punchoutPickerDismissText - In the implementation block
@property (assign,nonatomic) BOOL canBeHidden;                                          //@synthesize canBeHidden=_canBeHidden - In the implementation block
@property (assign,nonatomic) BOOL hasTopPadding;                                        //@synthesize hasTopPadding=_hasTopPadding - In the implementation block
@property (assign,nonatomic) BOOL hasBottomPadding;                                     //@synthesize hasBottomPadding=_hasBottomPadding - In the implementation block
@property (nonatomic,copy) NSString * type;                                             //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) int separatorStyle;                                        //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (nonatomic,retain) _SFPBColor * backgroundColor;                              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) _SFPBRichText * suggestionText;                            //@synthesize suggestionText=_suggestionText - In the implementation block
@property (assign,nonatomic) BOOL isContact;                                            //@synthesize isContact=_isContact - In the implementation block
@property (nonatomic,copy) NSString * scopedSearchSectionBundleIdentifier;              //@synthesize scopedSearchSectionBundleIdentifier=_scopedSearchSectionBundleIdentifier - In the implementation block
@property (assign,nonatomic) int suggestionType;                                        //@synthesize suggestionType=_suggestionType - In the implementation block
@property (nonatomic,retain) _SFPBRichText * detailText;                                //@synthesize detailText=_detailText - In the implementation block
@property (nonatomic,retain) _SFPBImage * thumbnail;                                    //@synthesize thumbnail=_thumbnail - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(_SFPBImage *)thumbnail;
-(void)setThumbnail:(_SFPBImage *)arg1 ;
-(_SFPBColor *)backgroundColor;
-(void)setBackgroundColor:(_SFPBColor *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)setSuggestionType:(int)arg1 ;
-(int)suggestionType;
-(NSArray *)punchoutOptions;
-(NSData *)jsonData;
-(_SFPBRichText *)detailText;
-(void)setDetailText:(_SFPBRichText *)arg1 ;
-(id)initWithFacade:(id)arg1 ;
-(void)setPunchoutOptions:(NSArray *)arg1 ;
-(NSString *)punchoutPickerTitle;
-(void)setPunchoutPickerTitle:(NSString *)arg1 ;
-(NSString *)punchoutPickerDismissText;
-(void)setPunchoutPickerDismissText:(NSString *)arg1 ;
-(BOOL)canBeHidden;
-(void)setCanBeHidden:(BOOL)arg1 ;
-(BOOL)hasTopPadding;
-(void)setHasTopPadding:(BOOL)arg1 ;
-(BOOL)hasBottomPadding;
-(void)setHasBottomPadding:(BOOL)arg1 ;
-(int)separatorStyle;
-(void)setSeparatorStyle:(int)arg1 ;
-(void)addPunchoutOptions:(id)arg1 ;
-(void)clearPunchoutOptions;
-(unsigned long long)punchoutOptionsCount;
-(id)punchoutOptionsAtIndex:(unsigned long long)arg1 ;
-(void)setSuggestionText:(_SFPBRichText *)arg1 ;
-(void)setIsContact:(BOOL)arg1 ;
-(void)setScopedSearchSectionBundleIdentifier:(NSString *)arg1 ;
-(_SFPBRichText *)suggestionText;
-(BOOL)isContact;
-(NSString *)scopedSearchSectionBundleIdentifier;
@end

