/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:38 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VFX.framework/VFX
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface ECS.Scheduler : _UKNOWN_SUPERCLASS_ {

	 entityManager;
	 lock;
	 currentJobID;
	 recurrentJobs;
	 orderedRecurrentJobs;
	 remainingJobsForThisFrame;
	 pendingJobsToEnqueueForThisFrame;
	 pendingJobsToEnqueueForThisFrameOnly;
	 groupsToUnregister;
	 needsRescheduling;
	 needsReschedulingForThisFrame;
	 dependenciesByJob;
	 schedulerEventsRecordedDuringLastFrame;
	 queriesRecordedDuringLastFrame;
	 schedulerEventsRecordedDuringThisFrame;
	 queriesRecordedDuringThisFrame;
	 simulationTimeScale;

}
@end

