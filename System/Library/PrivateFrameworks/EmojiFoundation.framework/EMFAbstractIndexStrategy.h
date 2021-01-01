/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:03 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/EmojiFoundation.framework/EmojiFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/EMFIndexStrategy.h>

@class NSDictionary, NSString;

@interface EMFAbstractIndexStrategy : NSObject <EMFIndexStrategy> {

	NSDictionary* _termIndex;
	NSDictionary* _documentIndex;

}

@property (nonatomic,retain) NSDictionary * termIndex;                  //@synthesize termIndex=_termIndex - In the implementation block
@property (nonatomic,retain) NSDictionary * documentIndex;              //@synthesize documentIndex=_documentIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)termIndex;
-(NSDictionary *)documentIndex;
-(id)termsForDocument:(id)arg1 ;
-(id)postingsForTerm:(id)arg1 ;
-(id)commonDocumentsForTerms:(id)arg1 ;
-(id)termWeightForTerm:(id)arg1 inDocument:(id)arg2 ;
-(id)calculateDocumentWeightsForQueryTokenCounts:(id)arg1 ;
-(void)assertMethodNeedsConcreteImplementation:(SEL)arg1 ;
-(id)initWithTermIndex:(id)arg1 andDocumentIndex:(id)arg2 ;
-(void)setTermIndex:(NSDictionary *)arg1 ;
-(void)setDocumentIndex:(NSDictionary *)arg1 ;
@end

