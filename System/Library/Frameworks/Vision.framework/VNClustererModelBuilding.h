/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:22 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol VNClustererModelBuilding
@optional
-(id)updateModelByAddingFaces:(id)arg1 canceller:(id)arg2 error:(id*)arg3;
-(id)updateModelByAddingFaces:(id)arg1 withGroupingIdentifiers:(id)arg2 canceller:(id)arg3 error:(id*)arg4;
-(id)updateModelByRemovingFaces:(id)arg1 canceller:(id)arg2 error:(id*)arg3;

@required
-(BOOL)resetModelState:(id)arg1 error:(id*)arg2;
-(id)saveAndReturnCurrentModelState:(id*)arg1;
-(id)updateModelByAddingFaces:(id)arg1 andRemovingFaces:(id)arg2 canceller:(id)arg3 error:(id*)arg4;
-(id)updateModelByAddingFaces:(id)arg1 withGroupingIdentifiers:(id)arg2 andRemovingFaces:(id)arg3 canceller:(id)arg4 error:(id*)arg5;

@end

