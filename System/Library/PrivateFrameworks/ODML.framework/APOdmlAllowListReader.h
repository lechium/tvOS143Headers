/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:16 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ODML.framework/ODML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ODML/ODML-Structs.h>
@class NSString;

@interface APOdmlAllowListReader : NSObject {

	unsigned _nextIndex;
	unsigned long long _numberOfIDs;
	NSString* _vectorVersion;
	_sFILE* _file;

}

@property (assign,nonatomic) unsigned long long numberOfIDs;              //@synthesize numberOfIDs=_numberOfIDs - In the implementation block
@property (nonatomic,copy) NSString * vectorVersion;                      //@synthesize vectorVersion=_vectorVersion - In the implementation block
@property (assign,nonatomic) _sFILE* file;                                //@synthesize file=_file - In the implementation block
@property (assign,nonatomic) unsigned nextIndex;                          //@synthesize nextIndex=_nextIndex - In the implementation block
-(void)dealloc;
-(_sFILE*)file;
-(void)setFile:(_sFILE*)arg1 ;
-(id)nextLine;
-(unsigned)nextIndex;
-(id)readFile;
-(void)setNextIndex:(unsigned)arg1 ;
-(NSString *)vectorVersion;
-(void)setVectorVersion:(NSString *)arg1 ;
-(void)setNumberOfIDs:(unsigned long long)arg1 ;
-(unsigned long long)numberOfIDs;
-(id)openForReadingContentsOfURL:(id)arg1 ;
@end
