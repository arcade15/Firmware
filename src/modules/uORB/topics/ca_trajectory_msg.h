#ifndef TOPIC_CA_TRAJECTORY_MSG_H
#define TOPIC_CA_TRAJECTORY_MSG_H

#include <stdint.h>
#include "../uORB.h"

/** global 'actuator output is live' control. */
struct ca_traj_struct_s {

	uint64_t	timestamp;
	uint64_t time_start_usec; ///< starting time of the trajectory.
	uint64_t time_stop_usec; ///< stopping time of the trajectory.
	float coefficients[28]; ///< coefficients of the polynomial trajectory.
	uint16_t seq_id; ///< sequence id of the sent trajectory piece.
};

ORB_DECLARE(ca_trajectory_msg);

#endif
