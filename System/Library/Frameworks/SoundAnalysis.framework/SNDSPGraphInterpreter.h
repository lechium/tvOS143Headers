/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:35 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <SoundAnalysis/SoundAnalysis-Structs.h>
@interface SNDSPGraphInterpreter : NSObject {

	unique_ptr<DSPGraph::Interpreter, std::__1::default_delete<DSPGraph::Interpreter> >* _interpreter;

}
+(id)compileText:(id)arg1 withSubstitutions:(id)arg2 includingPaths:(id)arg3 ;
+(id)compileFile:(id)arg1 withSubstitutions:(id)arg2 includingPaths:(id)arg3 ;
+(unordered_map<std::__1::basic_string<char>, std::__1::basic_string<char>, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::basic_string<char> > > >*)stringMapFromStringDictionary:(id)arg1 ;
+(vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > >*)stringVectorFromStringArray:(id)arg1 ;
-(id)init;
-(id)compileText:(id)arg1 withSubstitutions:(id)arg2 includingPaths:(id)arg3 ;
-(id)compileFile:(id)arg1 withSubstitutions:(id)arg2 includingPaths:(id)arg3 ;
@end

