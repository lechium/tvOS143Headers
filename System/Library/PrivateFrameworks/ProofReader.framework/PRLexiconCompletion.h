/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:19 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PRLexiconCompletion : NSObject {

	unsigned _tokenID;
	double _score;

}

@property (readonly) unsigned tokenID;              //@synthesize tokenID=_tokenID - In the implementation block
@property (readonly) double score;                  //@synthesize score=_score - In the implementation block
-(id)description;
-(double)score;
-(unsigned)tokenID;
-(id)initWithTokenID:(unsigned)arg1 score:(double)arg2 ;
@end
