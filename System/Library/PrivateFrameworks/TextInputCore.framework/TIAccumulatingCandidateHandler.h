/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:19 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/TICandidateHandler.h>

@class TIAutocorrectionList;

@interface TIAccumulatingCandidateHandler : NSObject <TICandidateHandler> {

	unsigned long long _status;
	/*^block*/id _candidateHandler;
	TIAutocorrectionList* _candidates;

}

@property (nonatomic,retain) TIAutocorrectionList * candidates;              //@synthesize candidates=_candidates - In the implementation block
@property (nonatomic,copy,readonly) id candidateHandler;                     //@synthesize candidateHandler=_candidateHandler - In the implementation block
@property (nonatomic,readonly) BOOL asynchronous; 
-(void)dealloc;
-(void)open;
-(void)close;
-(TIAutocorrectionList *)candidates;
-(void)setCandidates:(TIAutocorrectionList *)arg1 ;
-(BOOL)asynchronous;
-(void)pushCandidates:(id)arg1 ;
-(id)initWithHandlerBlock:(/*^block*/id)arg1 ;
-(id)candidateHandler;
@end
