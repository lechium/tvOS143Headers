/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:19 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class TIKeyboardOutput, TIRevisionHistory, TIKeyboardState;

@interface TIKeyboardInputManagerKeyboardContext : NSObject {

	TIKeyboardOutput* _output;
	TIRevisionHistory* _revisionHistory;
	TIKeyboardState* _currentState;

}

@property (nonatomic,readonly) TIKeyboardState * currentState;                 //@synthesize currentState=_currentState - In the implementation block
@property (nonatomic,readonly) TIKeyboardOutput * output;                      //@synthesize output=_output - In the implementation block
@property (nonatomic,retain) TIRevisionHistory * revisionHistory;              //@synthesize revisionHistory=_revisionHistory - In the implementation block
-(TIKeyboardState *)currentState;
-(TIKeyboardOutput *)output;
-(void)insertText:(id)arg1 ;
-(void)deleteBackward:(unsigned long long)arg1 ;
-(void)insertTextAfterSelection:(id)arg1 ;
-(void)deleteForward:(unsigned long long)arg1 ;
-(id)initWithKeyboardState:(id)arg1 ;
-(TIRevisionHistory *)revisionHistory;
-(void)clearInputForMarkedText;
-(void)deleteTextBackward:(id)arg1 ;
-(void)unmarkText:(id)arg1 ;
-(void)acceptCandidate:(id)arg1 ;
-(void)deleteHandwritingStrokes:(id)arg1 ;
-(void)setRevisionHistory:(TIRevisionHistory *)arg1 ;
@end

