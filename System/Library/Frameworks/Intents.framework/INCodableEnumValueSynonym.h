/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:38 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/INCodableCoding.h>

@class INCodableEnumValue, NSString, INCodableEnum;

@interface INCodableEnumValueSynonym : NSObject <NSSecureCoding, NSCopying, INCodableCoding> {

	INCodableEnumValue* _codableEnumValue;
	NSString* _pronunciationHint;
	NSString* _pronunciationHintLocID;
	NSString* _synonym;
	NSString* _synonymLocID;

}

@property (assign,setter=_setCodableEnumValue:,nonatomic,__weak) INCodableEnumValue * _codableEnumValue;              //@synthesize codableEnumValue=_codableEnumValue - In the implementation block
@property (nonatomic,__weak,readonly) INCodableEnum * _codableEnum; 
@property (nonatomic,copy) NSString * pronunciationHint;                                                              //@synthesize pronunciationHint=_pronunciationHint - In the implementation block
@property (nonatomic,copy) NSString * pronunciationHintLocID;                                                         //@synthesize pronunciationHintLocID=_pronunciationHintLocID - In the implementation block
@property (nonatomic,copy) NSString * synonym;                                                                        //@synthesize synonym=_synonym - In the implementation block
@property (nonatomic,copy) NSString * synonymLocID;                                                                   //@synthesize synonymLocID=_synonymLocID - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedSynonym; 
@property (nonatomic,copy,readonly) NSString * localizedPronunciationHint; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)updateWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(NSString *)pronunciationHint;
-(void)setPronunciationHint:(NSString *)arg1 ;
-(NSString *)localizedPronunciationHint;
-(id)localizedPronunciationHintForLanguage:(id)arg1 ;
-(id)localizedPronunciationHintWithLocalizer:(id)arg1 ;
-(NSString *)pronunciationHintLocID;
-(void)setPronunciationHintLocID:(NSString *)arg1 ;
-(INCodableEnum *)_codableEnum;
-(INCodableEnumValue *)_codableEnumValue;
-(NSString *)localizedSynonym;
-(id)localizedSynonymForLanguage:(id)arg1 ;
-(id)localizedSynonymWithLocalizer:(id)arg1 ;
-(void)_setCodableEnumValue:(id)arg1 ;
-(NSString *)synonym;
-(void)setSynonym:(NSString *)arg1 ;
-(NSString *)synonymLocID;
-(void)setSynonymLocID:(NSString *)arg1 ;
-(id)__INCodableEnumPronunciationHintIDKey;
-(id)__INCodableEnumPronunciationHintKey;
-(id)__INCodableEnumSynonymIDKey;
-(id)__INCodableEnumSynonymKey;
@end

